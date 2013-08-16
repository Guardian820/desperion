//  Generated by desperion protocol_builder

#ifndef d2fstream_title_category_hpp
#define d2fstream_title_category_hpp

namespace datacenter
{
    struct title_category : data_holder
    {
        int32_t id;
        int32_t name_id;
        
        title_category() = default;
        
        title_category(const int32_t & id, const int32_t & name_id) : id { id }, name_id { name_id }
        {
        }
        
        title_category(data_object && data)
        {
            acquire(id, data.second.at("id"));
            acquire(name_id, data.second.at("nameId"));
        }
        
        data_object to_d2o(const d2o_writer &);
    };

#ifdef d2fstream_d2o_writer_hpp
    data_object to_d2o(const d2o_writer & file)
    {
        data_object data;
        data.first = file.get_class_id_for_type<title_category>();
        release(id, data.second["id"], file);
        release(name_id, data.second["nameId"], file);
        return data;
    }
#endif
}
#endif