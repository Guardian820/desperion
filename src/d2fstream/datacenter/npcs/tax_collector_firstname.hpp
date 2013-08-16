//  Generated by desperion protocol_builder

#ifndef d2fstream_tax_collector_firstname_hpp
#define d2fstream_tax_collector_firstname_hpp

namespace datacenter
{
    struct tax_collector_firstname : data_holder
    {
        int32_t id;
        int32_t firstname_id;
        
        tax_collector_firstname() = default;
        
        tax_collector_firstname(const int32_t & id, const int32_t & firstname_id) : id { id }, firstname_id { firstname_id }
        {
        }
        
        tax_collector_firstname(data_object && data)
        {
            acquire(id, data.second.at("id"));
            acquire(firstname_id, data.second.at("firstnameId"));
        }
        
        data_object to_d2o(const d2o_writer &);
    };

#ifdef d2fstream_d2o_writer_hpp
    data_object to_d2o(const d2o_writer & file)
    {
        data_object data;
        data.first = file.get_class_id_for_type<tax_collector_firstname>();
        release(id, data.second["id"], file);
        release(firstname_id, data.second["firstnameId"], file);
        return data;
    }
#endif
}
#endif