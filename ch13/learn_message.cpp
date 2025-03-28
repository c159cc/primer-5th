#include <cassert>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include <forward_list>
#include <list>
#include <stack>

#include <algorithm>
#include <cctype>
#include <functional>
#include <map>
#include <memory>
#include <numeric>
#include <set>
using namespace std;

/**
Message和Folder实现

 */

class Folder;
class Message {
  public:
    Message() : contents("") {}
    Message(const string &s) : contents(s) {}
    Message(const Message &msg);
    Message &operator=(Message rhs);
    ~Message();

    
  private:
    string contents;
    set<Folder *> folders;
    void add_to_folders(const Message &msg);
    void remove_from_folders();



    public:
      void save(Folder &);
      void remove(Folder &);

      void addFldr(Folder *f) { folders.insert(f); }
      void remFldr(Folder *f) { folders.erase(f); }
};

class Folder {
  public:
    void addMsg(Message *msg);
    void remMsg(Message *msg);

  private:
    set<Message *> messages;
};


void Message::save(Folder &f) {
    folders.insert(&f);
    f.addMsg(this);
}

void Message::remove(Folder &f) {
    folders.erase(&f);
    f.remMsg(this);
}

void Folder::addMsg(Message *msg) { messages.insert(msg); }
void Folder::remMsg(Message *msg) { messages.erase(msg); }

void Message::add_to_folders(const Message &msg) {
    for (auto f : msg.folders)
        f->addMsg(this);
}

void Message::remove_from_folders( ) {
    for (auto f :  folders)
        f->remMsg(this);
}

Message::Message(const Message &msg)
    : contents(msg.contents), folders(msg.folders) {
    add_to_folders(msg);
};

Message::~Message() { remove_from_folders(); };

Message &Message::operator=(Message rhs) {
    remove_from_folders();
    contents = rhs.contents;
    folders = rhs.folders;
    add_to_folders(rhs);
    return *this;
}
