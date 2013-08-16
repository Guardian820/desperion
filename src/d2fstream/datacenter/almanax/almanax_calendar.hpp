//  Generated by desperion protocol_builder

#ifndef d2fstream_almanax_calendar_hpp
#define d2fstream_almanax_calendar_hpp

namespace datacenter
{
    struct almanax_calendar : data_holder
    {
        int32_t id;
        int32_t name_id;
        int32_t desc_id;
        int32_t npc_id;
        
        almanax_calendar() = default;
        
        almanax_calendar(const int32_t & id, const int32_t & name_id, const int32_t & desc_id, const int32_t & npc_id) : id { id }, name_id { name_id }, desc_id { desc_id }, npc_id { npc_id }
        {
        }
        
        almanax_calendar(data_object && data)
        {
            acquire(id, data.second.at("id"));
            acquire(name_id, data.second.at("nameId"));
            acquire(desc_id, data.second.at("descId"));
            acquire(npc_id, data.second.at("npcId"));
        }
        
        data_object to_d2o(const d2o_writer &);
    };

#ifdef d2fstream_d2o_writer_hpp
    data_object to_d2o(const d2o_writer & file)
    {
        data_object data;
        data.first = file.get_class_id_for_type<almanax_calendar>();
        release(id, data.second["id"], file);
        release(name_id, data.second["nameId"], file);
        release(desc_id, data.second["descId"], file);
        release(npc_id, data.second["npcId"], file);
        return data;
    }
#endif
}
#endif