//  Generated by desperion protocol_builder

#ifndef d2fstream_anim_fun_data_hpp
#define d2fstream_anim_fun_data_hpp

namespace datacenter
{
    struct anim_fun_data : data_holder
    {
        std::string anim_name;
        int32_t anim_weight;
        
        anim_fun_data() = default;
        
        anim_fun_data(const std::string & anim_name, const int32_t & anim_weight) : anim_name { anim_name }, anim_weight { anim_weight }
        {
        }
        
        anim_fun_data(data_object && data)
        {
            acquire(anim_name, data.second.at("animName"));
            acquire(anim_weight, data.second.at("animWeight"));
        }
        
        data_object to_d2o(const d2o_writer &);
    };

#ifdef d2fstream_d2o_writer_hpp
    data_object to_d2o(const d2o_writer & file)
    {
        data_object data;
        data.first = file.get_class_id_for_type<anim_fun_data>();
        release(anim_name, data.second["animName"], file);
        release(anim_weight, data.second["animWeight"], file);
        return data;
    }
#endif
}
#endif