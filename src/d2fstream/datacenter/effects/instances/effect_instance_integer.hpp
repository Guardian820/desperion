//  Generated by desperion protocol_builder

#ifndef d2fstream_effect_instance_integer_hpp
#define d2fstream_effect_instance_integer_hpp

namespace datacenter
{
    struct effect_instance_integer : effect_instance
    {
        int32_t value;
        
        effect_instance_integer() = default;
        
        effect_instance_integer(const int32_t & effect_id, const int32_t & target_id, const std::string & target_mask, const int32_t & duration, const int32_t & delay, const int32_t & random, const int32_t & group, const int32_t & modificator, const bool & trigger, const bool & hidden, const int32_t & zone_size, const int32_t & zone_shape, const int32_t & zone_min_size, const int32_t & value) : effect_instance { effect_id, target_id, target_mask, duration, delay, random, group, modificator, trigger, hidden, zone_size, zone_shape, zone_min_size }, value { value }
        {
        }
        
        effect_instance_integer(data_object && data) : effect_instance { std::forward<data_object>(data) }
        {
            acquire(value, data.second.at("value"));
        }
        
        data_object to_d2o(const d2o_writer &);
    };

#ifdef d2fstream_d2o_writer_hpp
    data_object to_d2o(const d2o_writer & file)
    {
        data_object data = effect_instance::to_d2o(file);
        data.first = file.get_class_id_for_type<effect_instance_integer>();
        release(value, data.second["value"], file);
        return data;
    }
#endif
}
#endif