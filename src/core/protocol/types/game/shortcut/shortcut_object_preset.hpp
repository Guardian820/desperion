//  Generated by desperion protocol_builder

#ifndef core_shortcut_object_preset_hpp
#define core_shortcut_object_preset_hpp

namespace protocol
{
    struct shortcut_object_preset : shortcut_object
    {
        int8_t preset_id;
        
        int16_t id() const override
        { return 370; } 
        
        shortcut_object_preset(const int32_t & slot, const int8_t & preset_id) : shortcut_object { slot }
        {
            _data << preset_id;
        }
        
        shortcut_object_preset(byte_buffer & data) : shortcut_object { data }
        {
            data >> preset_id;
        }
    };
    
    using shortcut_object_preset_ptr = std::unique_ptr<shortcut_object_preset>;
}

#endif
