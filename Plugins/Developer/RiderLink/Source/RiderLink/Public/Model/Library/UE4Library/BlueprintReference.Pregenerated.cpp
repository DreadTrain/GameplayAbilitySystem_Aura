//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a RdGen v1.11.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "BlueprintReference.Pregenerated.h"



#ifdef _MSC_VER
#pragma warning( push )
#pragma warning( disable:4250 )
#pragma warning( disable:4307 )
#pragma warning( disable:4267 )
#pragma warning( disable:4244 )
#pragma warning( disable:4100 )
#endif

namespace JetBrains {
namespace EditorPlugin {
// companion
// constants
// initializer
void BlueprintReference::initialize()
{
}
// primary ctor
BlueprintReference::BlueprintReference(FString pathName_, FString guid_) :
rd::IPolymorphicSerializable()
,pathName_(std::move(pathName_)), guid_(std::move(guid_))
{
    initialize();
}
// secondary constructor
// default ctors and dtors
// reader
BlueprintReference BlueprintReference::read(rd::SerializationCtx& ctx, rd::Buffer & buffer)
{
    auto pathName_ = rd::Polymorphic<FString>::read(ctx, buffer);
    auto guid_ = rd::Polymorphic<FString>::read(ctx, buffer);
    BlueprintReference res{std::move(pathName_), std::move(guid_)};
    return res;
}
// writer
void BlueprintReference::write(rd::SerializationCtx& ctx, rd::Buffer& buffer) const
{
    rd::Polymorphic<std::decay_t<decltype(pathName_)>>::write(ctx, buffer, pathName_);
    rd::Polymorphic<std::decay_t<decltype(guid_)>>::write(ctx, buffer, guid_);
}
// virtual init
// identify
// getters
FString const & BlueprintReference::get_pathName() const
{
    return pathName_;
}
FString const & BlueprintReference::get_guid() const
{
    return guid_;
}
// intern
// equals trait
bool BlueprintReference::equals(rd::ISerializable const& object) const
{
    auto const &other = dynamic_cast<BlueprintReference const&>(object);
    if (this == &other) return true;
    if (this->pathName_ != other.pathName_) return false;
    if (this->guid_ != other.guid_) return false;
    
    return true;
}
// equality operators
bool operator==(const BlueprintReference &lhs, const BlueprintReference &rhs) {
    if (lhs.type_name() != rhs.type_name()) return false;
    return lhs.equals(rhs);
}
bool operator!=(const BlueprintReference &lhs, const BlueprintReference &rhs){
    return !(lhs == rhs);
}
// hash code trait
size_t BlueprintReference::hashCode() const noexcept
{
    size_t __r = 0;
    __r = __r * 31 + (rd::hash<FString>()(get_pathName()));
    __r = __r * 31 + (rd::hash<FString>()(get_guid()));
    return __r;
}
// type name trait
std::string BlueprintReference::type_name() const
{
    return "BlueprintReference";
}
// static type name trait
std::string BlueprintReference::static_type_name()
{
    return "BlueprintReference";
}
// polymorphic to string
std::string BlueprintReference::toString() const
{
    std::string res = "BlueprintReference\n";
    res += "\tpathName = ";
    res += rd::to_string(pathName_);
    res += '\n';
    res += "\tguid = ";
    res += rd::to_string(guid_);
    res += '\n';
    return res;
}
// external to string
std::string to_string(const BlueprintReference & value)
{
    return value.toString();
}
}
}

#ifdef _MSC_VER
#pragma warning( pop )
#endif

