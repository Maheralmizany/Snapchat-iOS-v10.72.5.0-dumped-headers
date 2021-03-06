//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatGroupUpdateContent.h"

@class NSArray, NSString;

@interface SCChatGroupUpdateContent : NSObject <SCChatGroupUpdateContent>
{
    NSString *_modifiedBy;
    NSString *_groupName;
    NSArray *_modifiedParticipants;
    long long _type;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSArray *modifiedParticipants; // @synthesize modifiedParticipants=_modifiedParticipants;
@property(readonly, copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(readonly, copy, nonatomic) NSString *modifiedBy; // @synthesize modifiedBy=_modifiedBy;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithModifiedBy:(id)arg1 groupName:(id)arg2 modifiedParticipants:(id)arg3 type:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

