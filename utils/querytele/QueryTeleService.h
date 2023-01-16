/**
 * Autogenerated by Thrift Compiler (0.9.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/TDispatchProcessor.h>
#include "querytele_types.h"


namespace querytele
{
class QueryTeleServiceIf
{
 public:
  virtual ~QueryTeleServiceIf()
  {
  }
  virtual void postQuery(const QueryTele& query) = 0;
  virtual void postStep(const StepTele& query) = 0;
  virtual void postImport(const ImportTele& query) = 0;
};

class QueryTeleServiceIfFactory
{
 public:
  typedef QueryTeleServiceIf Handler;

  virtual ~QueryTeleServiceIfFactory()
  {
  }

  virtual QueryTeleServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(QueryTeleServiceIf* /* handler */) = 0;
};

class QueryTeleServiceIfSingletonFactory : virtual public QueryTeleServiceIfFactory
{
 public:
  QueryTeleServiceIfSingletonFactory(const std::shared_ptr<QueryTeleServiceIf>& iface) : iface_(iface)
  {
  }
  virtual ~QueryTeleServiceIfSingletonFactory()
  {
  }

  virtual QueryTeleServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&)
  {
    return iface_.get();
  }
  virtual void releaseHandler(QueryTeleServiceIf* /* handler */)
  {
  }

 protected:
  std::shared_ptr<QueryTeleServiceIf> iface_;
};

class QueryTeleServiceNull : virtual public QueryTeleServiceIf
{
 public:
  virtual ~QueryTeleServiceNull()
  {
  }
  void postQuery(const QueryTele& /* query */)
  {
    return;
  }
  void postStep(const StepTele& /* query */)
  {
    return;
  }
  void postImport(const ImportTele& /* query */)
  {
    return;
  }
};

typedef struct _QueryTeleService_postQuery_args__isset
{
  _QueryTeleService_postQuery_args__isset() : query(false)
  {
  }
  bool query;
} _QueryTeleService_postQuery_args__isset;

class QueryTeleService_postQuery_args
{
 public:
  QueryTeleService_postQuery_args()
  {
  }

  virtual ~QueryTeleService_postQuery_args() throw()
  {
  }

  QueryTele query;

  _QueryTeleService_postQuery_args__isset __isset;

  void __set_query(const QueryTele& val)
  {
    query = val;
  }

  bool operator==(const QueryTeleService_postQuery_args& rhs) const
  {
    if (!(query == rhs.query))
      return false;

    return true;
  }
  bool operator!=(const QueryTeleService_postQuery_args& rhs) const
  {
    return !(*this == rhs);
  }

  bool operator<(const QueryTeleService_postQuery_args&) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;
};

class QueryTeleService_postQuery_pargs
{
 public:
  virtual ~QueryTeleService_postQuery_pargs() throw()
  {
  }

  const QueryTele* query;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;
};

class QueryTeleService_postQuery_result
{
 public:
  QueryTeleService_postQuery_result()
  {
  }

  virtual ~QueryTeleService_postQuery_result() throw()
  {
  }

  bool operator==(const QueryTeleService_postQuery_result& /* rhs */) const
  {
    return true;
  }
  bool operator!=(const QueryTeleService_postQuery_result& rhs) const
  {
    return !(*this == rhs);
  }

  bool operator<(const QueryTeleService_postQuery_result&) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;
};

class QueryTeleService_postQuery_presult
{
 public:
  virtual ~QueryTeleService_postQuery_presult() throw()
  {
  }

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
};

typedef struct _QueryTeleService_postStep_args__isset
{
  _QueryTeleService_postStep_args__isset() : query(false)
  {
  }
  bool query;
} _QueryTeleService_postStep_args__isset;

class QueryTeleService_postStep_args
{
 public:
  QueryTeleService_postStep_args()
  {
  }

  virtual ~QueryTeleService_postStep_args() throw()
  {
  }

  StepTele query;

  _QueryTeleService_postStep_args__isset __isset;

  void __set_query(const StepTele& val)
  {
    query = val;
  }

  bool operator==(const QueryTeleService_postStep_args& rhs) const
  {
    if (!(query == rhs.query))
      return false;

    return true;
  }
  bool operator!=(const QueryTeleService_postStep_args& rhs) const
  {
    return !(*this == rhs);
  }

  bool operator<(const QueryTeleService_postStep_args&) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;
};

class QueryTeleService_postStep_pargs
{
 public:
  virtual ~QueryTeleService_postStep_pargs() throw()
  {
  }

  const StepTele* query;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;
};

class QueryTeleService_postStep_result
{
 public:
  QueryTeleService_postStep_result()
  {
  }

  virtual ~QueryTeleService_postStep_result() throw()
  {
  }

  bool operator==(const QueryTeleService_postStep_result& /* rhs */) const
  {
    return true;
  }
  bool operator!=(const QueryTeleService_postStep_result& rhs) const
  {
    return !(*this == rhs);
  }

  bool operator<(const QueryTeleService_postStep_result&) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;
};

class QueryTeleService_postStep_presult
{
 public:
  virtual ~QueryTeleService_postStep_presult() throw()
  {
  }

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
};

typedef struct _QueryTeleService_postImport_args__isset
{
  _QueryTeleService_postImport_args__isset() : query(false)
  {
  }
  bool query;
} _QueryTeleService_postImport_args__isset;

class QueryTeleService_postImport_args
{
 public:
  QueryTeleService_postImport_args()
  {
  }

  virtual ~QueryTeleService_postImport_args() throw()
  {
  }

  ImportTele query;

  _QueryTeleService_postImport_args__isset __isset;

  void __set_query(const ImportTele& val)
  {
    query = val;
  }

  bool operator==(const QueryTeleService_postImport_args& rhs) const
  {
    if (!(query == rhs.query))
      return false;

    return true;
  }
  bool operator!=(const QueryTeleService_postImport_args& rhs) const
  {
    return !(*this == rhs);
  }

  bool operator<(const QueryTeleService_postImport_args&) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;
};

class QueryTeleService_postImport_pargs
{
 public:
  virtual ~QueryTeleService_postImport_pargs() throw()
  {
  }

  const ImportTele* query;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;
};

class QueryTeleService_postImport_result
{
 public:
  QueryTeleService_postImport_result()
  {
  }

  virtual ~QueryTeleService_postImport_result() throw()
  {
  }

  bool operator==(const QueryTeleService_postImport_result& /* rhs */) const
  {
    return true;
  }
  bool operator!=(const QueryTeleService_postImport_result& rhs) const
  {
    return !(*this == rhs);
  }

  bool operator<(const QueryTeleService_postImport_result&) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;
};

class QueryTeleService_postImport_presult
{
 public:
  virtual ~QueryTeleService_postImport_presult() throw()
  {
  }

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
};

class QueryTeleServiceClient : virtual public QueryTeleServiceIf
{
 public:
  QueryTeleServiceClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot)
   : piprot_(prot), poprot_(prot)
  {
    iprot_ = prot.get();
    oprot_ = prot.get();
  }
  QueryTeleServiceClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot,
                         std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot)
   : piprot_(iprot), poprot_(oprot)
  {
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol()
  {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol()
  {
    return poprot_;
  }
  void postQuery(const QueryTele& query);
  void send_postQuery(const QueryTele& query);
  void recv_postQuery();
  void postStep(const StepTele& query);
  void send_postStep(const StepTele& query);
  void recv_postStep();
  void postImport(const ImportTele& query);
  void send_postImport(const ImportTele& query);
  void recv_postImport();

 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class QueryTeleServiceProcessor : public ::apache::thrift::TDispatchProcessor
{
 protected:
  std::shared_ptr<QueryTeleServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot,
                            ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname,
                            int32_t seqid, void* callContext);

 private:
  typedef void (QueryTeleServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*,
                                                             ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_postQuery(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot,
                         ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_postStep(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot,
                        ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_postImport(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot,
                          ::apache::thrift::protocol::TProtocol* oprot, void* callContext);

 public:
  QueryTeleServiceProcessor(std::shared_ptr<QueryTeleServiceIf> iface) : iface_(iface)
  {
    processMap_["postQuery"] = &QueryTeleServiceProcessor::process_postQuery;
    processMap_["postStep"] = &QueryTeleServiceProcessor::process_postStep;
    processMap_["postImport"] = &QueryTeleServiceProcessor::process_postImport;
  }

  virtual ~QueryTeleServiceProcessor()
  {
  }
};

class QueryTeleServiceProcessorFactory : public ::apache::thrift::TProcessorFactory
{
 public:
  QueryTeleServiceProcessorFactory(const ::std::shared_ptr<QueryTeleServiceIfFactory>& handlerFactory)
   : handlerFactory_(handlerFactory)
  {
  }

  ::std::shared_ptr< ::apache::thrift::TProcessor> getProcessor(
      const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::std::shared_ptr<QueryTeleServiceIfFactory> handlerFactory_;
};

class QueryTeleServiceMultiface : virtual public QueryTeleServiceIf
{
 public:
  QueryTeleServiceMultiface(std::vector<std::shared_ptr<QueryTeleServiceIf> >& ifaces) : ifaces_(ifaces)
  {
  }
  virtual ~QueryTeleServiceMultiface()
  {
  }

 protected:
  std::vector<std::shared_ptr<QueryTeleServiceIf> > ifaces_;
  QueryTeleServiceMultiface()
  {
  }
  void add(std::shared_ptr<QueryTeleServiceIf> iface)
  {
    ifaces_.push_back(iface);
  }

 public:
  void postQuery(const QueryTele& query)
  {
    size_t sz = ifaces_.size();
    size_t i = 0;

    for (; i < (sz - 1); ++i)
    {
      ifaces_[i]->postQuery(query);
    }

    ifaces_[i]->postQuery(query);
  }

  void postStep(const StepTele& query)
  {
    size_t sz = ifaces_.size();
    size_t i = 0;

    for (; i < (sz - 1); ++i)
    {
      ifaces_[i]->postStep(query);
    }

    ifaces_[i]->postStep(query);
  }

  void postImport(const ImportTele& query)
  {
    size_t sz = ifaces_.size();
    size_t i = 0;

    for (; i < (sz - 1); ++i)
    {
      ifaces_[i]->postImport(query);
    }

    ifaces_[i]->postImport(query);
  }
};

}  // namespace querytele
