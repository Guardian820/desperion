//  Generated by desperion protocol_builder

#ifndef d2fstream_anim_fun_monster_data_hpp
#define d2fstream_anim_fun_monster_data_hpp

namespace datacenter
{
    struct anim_fun_monster_data : anim_fun_data
    {
        
        anim_fun_monster_data() = default;
        
        anim_fun_monster_data(const std::string & anim_name, const int32_t & anim_weight) : anim_fun_data { anim_name, anim_weight }
        {
        }
        
        anim_fun_monster_data(data_object && data) : anim_fun_data { std::forward<data_object>(data) }
        {
        }
        
        data_object to_d2o(const d2o_writer &);
    };

#ifdef d2fstream_d2o_writer_hpp
    data_object to_d2o(const d2o_writer & file)
    {
        data_object data = anim_fun_data::to_d2o(file);
        data.first = file.get_class_id_for_type<anim_fun_monster_data>();
        return data;
    }
#endif
}
#endif