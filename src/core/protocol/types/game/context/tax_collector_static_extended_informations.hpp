//  Generated by desperion protocol_builder

#ifndef core_tax_collector_static_extended_informations_hpp
#define core_tax_collector_static_extended_informations_hpp

namespace protocol
{
    struct tax_collector_static_extended_informations : tax_collector_static_informations
    {
        alliance_informations_ptr alliance_identity;
        
        int16_t id() const override
        { return 440; } 
        
        tax_collector_static_extended_informations(const int16_t & first_name_id, const int16_t & last_name_id, const guild_informations_ptr & guild_identity, const alliance_informations_ptr & alliance_identity) : tax_collector_static_informations { first_name_id,last_name_id,guild_identity }
        {
            _data << alliance_identity->buffer();
        }
        
        tax_collector_static_extended_informations(byte_buffer & data) : tax_collector_static_informations { data }
        {
            alliance_identity = std::make_unique<alliance_informations>(data);
        }
    };
    
    using tax_collector_static_extended_informations_ptr = std::unique_ptr<tax_collector_static_extended_informations>;
}

#endif
