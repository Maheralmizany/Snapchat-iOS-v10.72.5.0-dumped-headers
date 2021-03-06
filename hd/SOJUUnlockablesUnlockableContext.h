//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUUnlockablesUnlockableContext.h"

@class NSArray, NSString;

@interface SOJUUnlockablesUnlockableContext : NSObject <SOJUUnlockablesUnlockableContext>
{
    NSArray *_triggerContexts;
    NSArray *_friendContexts;
    NSArray *_cameraContexts;
    NSArray *_mediaTypeContexts;
    NSArray *_actionmojiContexts;
    NSArray *_visualContexts;
    NSArray *_lensApplicableContexts;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSArray *lensApplicableContexts; // @synthesize lensApplicableContexts=_lensApplicableContexts;
@property(readonly, copy, nonatomic) NSArray *visualContexts; // @synthesize visualContexts=_visualContexts;
@property(readonly, copy, nonatomic) NSArray *actionmojiContexts; // @synthesize actionmojiContexts=_actionmojiContexts;
@property(readonly, copy, nonatomic) NSArray *mediaTypeContexts; // @synthesize mediaTypeContexts=_mediaTypeContexts;
@property(readonly, copy, nonatomic) NSArray *cameraContexts; // @synthesize cameraContexts=_cameraContexts;
@property(readonly, copy, nonatomic) NSArray *friendContexts; // @synthesize friendContexts=_friendContexts;
@property(readonly, copy, nonatomic) NSArray *triggerContexts; // @synthesize triggerContexts=_triggerContexts;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTriggerContexts:(id)arg1 friendContexts:(id)arg2 cameraContexts:(id)arg3 mediaTypeContexts:(id)arg4 actionmojiContexts:(id)arg5 visualContexts:(id)arg6 lensApplicableContexts:(id)arg7;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

