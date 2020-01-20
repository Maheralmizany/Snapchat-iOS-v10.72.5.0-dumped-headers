//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCLensCommandCompositeEffectDescriptor, SCLensCommandEffectDescriptor;

@interface SCLensCommandEffectDescriptorContainer : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCLensCommandEffectDescriptor *_descriptor_descriptor;
    SCLensCommandCompositeEffectDescriptor *_compositeDescriptor_compositeDescriptor;
}

+ (id)descriptorWithDescriptor:(id)arg1;
+ (id)compositeDescriptorWithCompositeDescriptor:(id)arg1;
+ (id)effectDescriptorContainerFromLens:(id)arg1 metadata:(id)arg2;
- (void).cxx_destruct;
- (void)matchDescriptor:(CDUnknownBlockType)arg1 compositeDescriptor:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
