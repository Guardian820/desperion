//  Generated by desperion protocol_builder

#ifndef core_party_cancel_invitation_notification_message_hpp
#define core_party_cancel_invitation_notification_message_hpp

namespace protocol
{
    struct party_cancel_invitation_notification_message : abstract_party_event_message
    {
        int32_t canceler_id;
        int32_t guest_id;
        
        int16_t id() const override
        { return 6251; } 
        
        party_cancel_invitation_notification_message(const int32_t & party_id, const int32_t & canceler_id, const int32_t & guest_id) : abstract_party_event_message { party_id }
        {
            _data << canceler_id;
            _data << guest_id;
        }
        
        party_cancel_invitation_notification_message(byte_buffer & data) : abstract_party_event_message { data }
        {
            data >> canceler_id;
            data >> guest_id;
        }
    };
}

#endif
