//  Generated by desperion protocol_builder

#ifndef core_krosmaster_figure_hpp
#define core_krosmaster_figure_hpp

namespace protocol
{
    struct krosmaster_figure : dofus_unit
    {
        std::string uid;
        int16_t figure;
        int16_t pedestal;
        bool bound;
        
        int16_t id() const override
        { return 397; } 
        
        krosmaster_figure(const std::string & uid, const int16_t & figure, const int16_t & pedestal, const bool & bound)
        {
            _data << uid;
            _data << figure;
            _data << pedestal;
            _data << bound;
        }
        
        krosmaster_figure(byte_buffer & data)
        {
            data >> uid;
            data >> figure;
            data >> pedestal;
            data >> bound;
        }
    };
    
    using krosmaster_figure_ptr = std::unique_ptr<krosmaster_figure>;
}

#endif
