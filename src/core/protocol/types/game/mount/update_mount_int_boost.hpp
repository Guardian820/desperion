//  Generated by desperion protocol_builder

#ifndef core_update_mount_int_boost_hpp
#define core_update_mount_int_boost_hpp

namespace protocol
{
    struct update_mount_int_boost : update_mount_boost
    {
        int32_t value;
        
        int16_t id() const override
        { return 357; } 
        
        update_mount_int_boost(const int8_t & type, const int32_t & value) : update_mount_boost { type }
        {
            _data << value;
        }
        
        update_mount_int_boost(byte_buffer & data) : update_mount_boost { data }
        {
            data >> value;
        }
    };
    
    using update_mount_int_boost_ptr = std::unique_ptr<update_mount_int_boost>;
}

#endif
