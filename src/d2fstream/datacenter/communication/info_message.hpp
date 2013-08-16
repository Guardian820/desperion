//  Generated by desperion protocol_builder

#ifndef d2fstream_info_message_hpp
#define d2fstream_info_message_hpp

namespace datacenter
{
    struct info_message : data_holder
    {
        int32_t type_id;
        int32_t message_id;
        int32_t text_id;
        
        info_message() = default;
        
        info_message(const int32_t & type_id, const int32_t & message_id, const int32_t & text_id) : type_id { type_id }, message_id { message_id }, text_id { text_id }
        {
        }
        
        info_message(data_object && data)
        {
            acquire(type_id, data.second.at("typeId"));
            acquire(message_id, data.second.at("messageId"));
            acquire(text_id, data.second.at("textId"));
        }
        
        data_object to_d2o(const d2o_writer &);
    };

#ifdef d2fstream_d2o_writer_hpp
    data_object to_d2o(const d2o_writer & file)
    {
        data_object data;
        data.first = file.get_class_id_for_type<info_message>();
        release(type_id, data.second["typeId"], file);
        release(message_id, data.second["messageId"], file);
        release(text_id, data.second["textId"], file);
        return data;
    }
#endif
}
#endif