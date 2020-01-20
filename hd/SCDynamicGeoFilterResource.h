//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "SCDynamicGeofilterRenderable.h"
#import "SCTraceEnabled.h"

@class NSString;

@interface SCDynamicGeoFilterResource : NSObject <SCTraceEnabled, NSCoding, SCDynamicGeofilterRenderable>
{
    NSString *_resourceId;
    double _rotation;
    NSString *_source;
    long long _dynamicContextSource;
    NSString *_type;
    NSString *_filterId;
    double _minRefreshInterval;
    struct CGRect _layout;
}

+ (id)resourceWithDictionary:(id)arg1 filterId:(id)arg2;
@property(nonatomic) double minRefreshInterval; // @synthesize minRefreshInterval=_minRefreshInterval;
@property(copy, nonatomic) NSString *filterId; // @synthesize filterId=_filterId;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property long long dynamicContextSource; // @synthesize dynamicContextSource=_dynamicContextSource;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) struct CGRect layout; // @synthesize layout=_layout;
@property(copy, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
- (void).cxx_destruct;
- (id)renderCacheComponentKeyWithContextData:(id)arg1 dynamicContextProperties:(id)arg2 userName:(id)arg3 displayName:(id)arg4;
- (void)getUIImagesWithCanvasSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2 contextData:(id)arg3 dynamicContextProperties:(id)arg4 userSession:(id)arg5 displayName:(id)arg6;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 filterId:(id)arg2;
- (id)initWithlayout:(struct CGRect)arg1 source:(id)arg2 resourceId:(id)arg3 rotation:(double)arg4 minRefreshInterval:(double)arg5 type:(id)arg6 filterId:(id)arg7;
- (id)hashableValuesFromDisplayParameters;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

