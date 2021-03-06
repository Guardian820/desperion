//  Generated by desperion protocol_builder

#ifndef core_shortcut_object_hpp
#define core_shortcut_object_hpp

namespace protocol
{
    struct shortcut_object : shortcut
    {
        
        int16_t id() const override
        { return 367; } 
        
        shortcut_object(const int32_t & slot) : shortcut { slot }
        {
        }
        
        shortcut_object(byte_buffer & data) : shortcut { data }
        {
        }
    };
    
    using shortcut_object_ptr = std::unique_ptr<shortcut_object>;
}

#endif
