//  Generated by desperion protocol_builder

#ifndef core_game_fight_turn_resume_message_hpp
#define core_game_fight_turn_resume_message_hpp

namespace protocol
{
    struct game_fight_turn_resume_message : game_fight_turn_start_message
    {
        
        int16_t id() const override
        { return 6307; } 
        
        game_fight_turn_resume_message(const int32_t & id, const int32_t & wait_time) : game_fight_turn_start_message { id,wait_time }
        {
        }
        
        game_fight_turn_resume_message(byte_buffer & data) : game_fight_turn_start_message { data }
        {
        }
    };
}

#endif
