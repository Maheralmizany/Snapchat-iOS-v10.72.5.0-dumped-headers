//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString;

@interface SCCFriendmojiGroupRenderRequest : SCComposerMarshallableObject
{
    NSString *_groupId;
}

@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithGroupId:(id)arg1;

@end

