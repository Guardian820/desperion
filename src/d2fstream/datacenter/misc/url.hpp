//  Generated by desperion protocol_builder

#ifndef d2fstream_url_hpp
#define d2fstream_url_hpp

namespace datacenter
{
    struct url : data_holder
    {
        int32_t id;
        int32_t browser_id;
        std::string url;
        std::string param;
        std::string method;
        
        url() = default;
        
        url(const int32_t & id, const int32_t & browser_id, const std::string & url, const std::string & param, const std::string & method) : id { id }, browser_id { browser_id }, url { url }, param { param }, method { method }
        {
        }
        
        url(data_object && data)
        {
            acquire(id, data.second.at("id"));
            acquire(browser_id, data.second.at("browserId"));
            acquire(url, data.second.at("url"));
            acquire(param, data.second.at("param"));
            acquire(method, data.second.at("method"));
        }
        
        data_object to_d2o(const d2o_writer &);
    };

#ifdef d2fstream_d2o_writer_hpp
    data_object to_d2o(const d2o_writer & file)
    {
        data_object data;
        data.first = file.get_class_id_for_type<url>();
        release(id, data.second["id"], file);
        release(browser_id, data.second["browserId"], file);
        release(url, data.second["url"], file);
        release(param, data.second["param"], file);
        release(method, data.second["method"], file);
        return data;
    }
#endif
}
#endif