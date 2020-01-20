//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSSet;

@interface SCLensCommandCompositeEffectDescriptor : NSObject <NSCopying>
{
    NSArray *_descriptors;
    NSSet *_rectangles;
}

@property(readonly, copy, nonatomic) NSSet *rectangles; // @synthesize rectangles=_rectangles;
@property(readonly, copy, nonatomic) NSArray *descriptors; // @synthesize descriptors=_descriptors;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDescriptors:(id)arg1 rectangles:(id)arg2;

@end
