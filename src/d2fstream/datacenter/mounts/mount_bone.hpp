//  Generated by desperion protocol_builder

#ifndef d2fstream_mount_bone_hpp
#define d2fstream_mount_bone_hpp

namespace datacenter
{
    struct mount_bone : data_holder
    {
        int32_t id;
        
        mount_bone() = default;
        
        mount_bone(const int32_t & id) : id { id }
        {
        }
        
        mount_bone(data_object && data)
        {
            acquire(id, data.second.at("id"));
        }
        
        data_object to_d2o(const d2o_writer &);
    };

#ifdef d2fstream_d2o_writer_hpp
    data_object to_d2o(const d2o_writer & file)
    {
        data_object data;
        data.first = file.get_class_id_for_type<mount_bone>();
        release(id, data.second["id"], file);
        return data;
    }
#endif
}
#endif