//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString, SCAdMediaCollectionItemAttachment;

@interface SCAdMediaCollection : NSObject <NSCopying, NSCoding>
{
    NSString *_headline;
    SCAdMediaCollectionItemAttachment *_defaultAttachment;
    NSArray *_items;
}

@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) SCAdMediaCollectionItemAttachment *defaultAttachment; // @synthesize defaultAttachment=_defaultAttachment;
@property(readonly, copy, nonatomic) NSString *headline; // @synthesize headline=_headline;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHeadline:(id)arg1 defaultAttachment:(id)arg2 items:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end

