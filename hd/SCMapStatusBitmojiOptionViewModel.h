//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString;

@interface SCMapStatusBitmojiOptionViewModel : SCComposerMarshallableObject
{
    NSString *_actionId;
    NSString *_stickerId;
    NSString *_avatarId;
}

@property(copy, nonatomic) NSString *avatarId; // @synthesize avatarId=_avatarId;
@property(copy, nonatomic) NSString *stickerId; // @synthesize stickerId=_stickerId;
@property(copy, nonatomic) NSString *actionId; // @synthesize actionId=_actionId;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithActionId:(id)arg1 stickerId:(id)arg2 avatarId:(id)arg3;

@end

