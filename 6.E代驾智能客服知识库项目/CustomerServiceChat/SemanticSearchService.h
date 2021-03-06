/**
 * Autogenerated by Thrift Compiler (0.9.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef SemanticSearchService_H
#define SemanticSearchService_H

#include <thrift/TDispatchProcessor.h>
#include "SemanticSearch_types.h"



class SemanticSearchServiceIf {
 public:
  virtual ~SemanticSearchServiceIf() {}
  virtual void engineChat(std::string& _return, const std::string& sXml) = 0;
  virtual void getHint(std::string& _return, const std::string& sInput) = 0;
  virtual void getRelate(std::string& _return, const std::string& sInput) = 0;
};

class SemanticSearchServiceIfFactory {
 public:
  typedef SemanticSearchServiceIf Handler;

  virtual ~SemanticSearchServiceIfFactory() {}

  virtual SemanticSearchServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(SemanticSearchServiceIf* /* handler */) = 0;
};

class SemanticSearchServiceIfSingletonFactory : virtual public SemanticSearchServiceIfFactory {
 public:
  SemanticSearchServiceIfSingletonFactory(const boost::shared_ptr<SemanticSearchServiceIf>& iface) : iface_(iface) {}
  virtual ~SemanticSearchServiceIfSingletonFactory() {}

  virtual SemanticSearchServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(SemanticSearchServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<SemanticSearchServiceIf> iface_;
};

class SemanticSearchServiceNull : virtual public SemanticSearchServiceIf {
 public:
  virtual ~SemanticSearchServiceNull() {}
  void engineChat(std::string& /* _return */, const std::string& /* sXml */) {
    return;
  }
  void getHint(std::string& /* _return */, const std::string& /* sInput */) {
    return;
  }
  void getRelate(std::string& /* _return */, const std::string& /* sInput */) {
    return;
  }
};

typedef struct _SemanticSearchService_engineChat_args__isset {
  _SemanticSearchService_engineChat_args__isset() : sXml(false) {}
  bool sXml;
} _SemanticSearchService_engineChat_args__isset;

class SemanticSearchService_engineChat_args {
 public:

  SemanticSearchService_engineChat_args() : sXml() {
  }

  virtual ~SemanticSearchService_engineChat_args() throw() {}

  std::string sXml;

  _SemanticSearchService_engineChat_args__isset __isset;

  void __set_sXml(const std::string& val) {
    sXml = val;
  }

  bool operator == (const SemanticSearchService_engineChat_args & rhs) const
  {
    if (!(sXml == rhs.sXml))
      return false;
    return true;
  }
  bool operator != (const SemanticSearchService_engineChat_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SemanticSearchService_engineChat_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class SemanticSearchService_engineChat_pargs {
 public:


  virtual ~SemanticSearchService_engineChat_pargs() throw() {}

  const std::string* sXml;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _SemanticSearchService_engineChat_result__isset {
  _SemanticSearchService_engineChat_result__isset() : success(false) {}
  bool success;
} _SemanticSearchService_engineChat_result__isset;

class SemanticSearchService_engineChat_result {
 public:

  SemanticSearchService_engineChat_result() : success() {
  }

  virtual ~SemanticSearchService_engineChat_result() throw() {}

  std::string success;

  _SemanticSearchService_engineChat_result__isset __isset;

  void __set_success(const std::string& val) {
    success = val;
  }

  bool operator == (const SemanticSearchService_engineChat_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const SemanticSearchService_engineChat_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SemanticSearchService_engineChat_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _SemanticSearchService_engineChat_presult__isset {
  _SemanticSearchService_engineChat_presult__isset() : success(false) {}
  bool success;
} _SemanticSearchService_engineChat_presult__isset;

class SemanticSearchService_engineChat_presult {
 public:


  virtual ~SemanticSearchService_engineChat_presult() throw() {}

  std::string* success;

  _SemanticSearchService_engineChat_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _SemanticSearchService_getHint_args__isset {
  _SemanticSearchService_getHint_args__isset() : sInput(false) {}
  bool sInput;
} _SemanticSearchService_getHint_args__isset;

class SemanticSearchService_getHint_args {
 public:

  SemanticSearchService_getHint_args() : sInput() {
  }

  virtual ~SemanticSearchService_getHint_args() throw() {}

  std::string sInput;

  _SemanticSearchService_getHint_args__isset __isset;

  void __set_sInput(const std::string& val) {
    sInput = val;
  }

  bool operator == (const SemanticSearchService_getHint_args & rhs) const
  {
    if (!(sInput == rhs.sInput))
      return false;
    return true;
  }
  bool operator != (const SemanticSearchService_getHint_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SemanticSearchService_getHint_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class SemanticSearchService_getHint_pargs {
 public:


  virtual ~SemanticSearchService_getHint_pargs() throw() {}

  const std::string* sInput;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _SemanticSearchService_getHint_result__isset {
  _SemanticSearchService_getHint_result__isset() : success(false) {}
  bool success;
} _SemanticSearchService_getHint_result__isset;

class SemanticSearchService_getHint_result {
 public:

  SemanticSearchService_getHint_result() : success() {
  }

  virtual ~SemanticSearchService_getHint_result() throw() {}

  std::string success;

  _SemanticSearchService_getHint_result__isset __isset;

  void __set_success(const std::string& val) {
    success = val;
  }

  bool operator == (const SemanticSearchService_getHint_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const SemanticSearchService_getHint_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SemanticSearchService_getHint_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _SemanticSearchService_getHint_presult__isset {
  _SemanticSearchService_getHint_presult__isset() : success(false) {}
  bool success;
} _SemanticSearchService_getHint_presult__isset;

class SemanticSearchService_getHint_presult {
 public:


  virtual ~SemanticSearchService_getHint_presult() throw() {}

  std::string* success;

  _SemanticSearchService_getHint_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _SemanticSearchService_getRelate_args__isset {
  _SemanticSearchService_getRelate_args__isset() : sInput(false) {}
  bool sInput;
} _SemanticSearchService_getRelate_args__isset;

class SemanticSearchService_getRelate_args {
 public:

  SemanticSearchService_getRelate_args() : sInput() {
  }

  virtual ~SemanticSearchService_getRelate_args() throw() {}

  std::string sInput;

  _SemanticSearchService_getRelate_args__isset __isset;

  void __set_sInput(const std::string& val) {
    sInput = val;
  }

  bool operator == (const SemanticSearchService_getRelate_args & rhs) const
  {
    if (!(sInput == rhs.sInput))
      return false;
    return true;
  }
  bool operator != (const SemanticSearchService_getRelate_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SemanticSearchService_getRelate_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class SemanticSearchService_getRelate_pargs {
 public:


  virtual ~SemanticSearchService_getRelate_pargs() throw() {}

  const std::string* sInput;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _SemanticSearchService_getRelate_result__isset {
  _SemanticSearchService_getRelate_result__isset() : success(false) {}
  bool success;
} _SemanticSearchService_getRelate_result__isset;

class SemanticSearchService_getRelate_result {
 public:

  SemanticSearchService_getRelate_result() : success() {
  }

  virtual ~SemanticSearchService_getRelate_result() throw() {}

  std::string success;

  _SemanticSearchService_getRelate_result__isset __isset;

  void __set_success(const std::string& val) {
    success = val;
  }

  bool operator == (const SemanticSearchService_getRelate_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const SemanticSearchService_getRelate_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SemanticSearchService_getRelate_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _SemanticSearchService_getRelate_presult__isset {
  _SemanticSearchService_getRelate_presult__isset() : success(false) {}
  bool success;
} _SemanticSearchService_getRelate_presult__isset;

class SemanticSearchService_getRelate_presult {
 public:


  virtual ~SemanticSearchService_getRelate_presult() throw() {}

  std::string* success;

  _SemanticSearchService_getRelate_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class SemanticSearchServiceClient : virtual public SemanticSearchServiceIf {
 public:
  SemanticSearchServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) :
    piprot_(prot),
    poprot_(prot) {
    iprot_ = prot.get();
    oprot_ = prot.get();
  }
  SemanticSearchServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) :
    piprot_(iprot),
    poprot_(oprot) {
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void engineChat(std::string& _return, const std::string& sXml);
  void send_engineChat(const std::string& sXml);
  void recv_engineChat(std::string& _return);
  void getHint(std::string& _return, const std::string& sInput);
  void send_getHint(const std::string& sInput);
  void recv_getHint(std::string& _return);
  void getRelate(std::string& _return, const std::string& sInput);
  void send_getRelate(const std::string& sInput);
  void recv_getRelate(std::string& _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class SemanticSearchServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<SemanticSearchServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (SemanticSearchServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_engineChat(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getHint(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getRelate(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  SemanticSearchServiceProcessor(boost::shared_ptr<SemanticSearchServiceIf> iface) :
    iface_(iface) {
    processMap_["engineChat"] = &SemanticSearchServiceProcessor::process_engineChat;
    processMap_["getHint"] = &SemanticSearchServiceProcessor::process_getHint;
    processMap_["getRelate"] = &SemanticSearchServiceProcessor::process_getRelate;
  }

  virtual ~SemanticSearchServiceProcessor() {}
};

class SemanticSearchServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  SemanticSearchServiceProcessorFactory(const ::boost::shared_ptr< SemanticSearchServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< SemanticSearchServiceIfFactory > handlerFactory_;
};

class SemanticSearchServiceMultiface : virtual public SemanticSearchServiceIf {
 public:
  SemanticSearchServiceMultiface(std::vector<boost::shared_ptr<SemanticSearchServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~SemanticSearchServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<SemanticSearchServiceIf> > ifaces_;
  SemanticSearchServiceMultiface() {}
  void add(boost::shared_ptr<SemanticSearchServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void engineChat(std::string& _return, const std::string& sXml) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->engineChat(_return, sXml);
    }
    ifaces_[i]->engineChat(_return, sXml);
    return;
  }

  void getHint(std::string& _return, const std::string& sInput) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getHint(_return, sInput);
    }
    ifaces_[i]->getHint(_return, sInput);
    return;
  }

  void getRelate(std::string& _return, const std::string& sInput) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getRelate(_return, sInput);
    }
    ifaces_[i]->getRelate(_return, sInput);
    return;
  }

};



#endif
