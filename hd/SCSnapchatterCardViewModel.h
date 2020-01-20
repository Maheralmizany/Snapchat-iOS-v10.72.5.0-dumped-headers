//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCSnapchatter;

@interface SCSnapchatterCardViewModel : NSObject
{
    _Bool _isFriend;
    _Bool _isFriendWhoAddedYou;
    _Bool _addFriendTapped;
    SCSnapchatter *_snapchatter;
    NSString *_displayName;
    NSString *_subtext;
    long long _friendSourceType;
}

+ (double)height;
+ (long long)buttonStateForUsername:(id)arg1 addFriendTapped:(_Bool)arg2;
@property(readonly, nonatomic) long long friendSourceType; // @synthesize friendSourceType=_friendSourceType;
@property(readonly, nonatomic) _Bool addFriendTapped; // @synthesize addFriendTapped=_addFriendTapped;
@property(readonly, nonatomic) _Bool isFriendWhoAddedYou; // @synthesize isFriendWhoAddedYou=_isFriendWhoAddedYou;
@property(readonly, nonatomic) _Bool isFriend; // @synthesize isFriend=_isFriend;
@property(readonly, copy, nonatomic) NSString *subtext; // @synthesize subtext=_subtext;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) SCSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;
- (void).cxx_destruct;
- (long long)buttonState;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSnapchatter:(id)arg1 addFriendTapped:(_Bool)arg2 friendSourceType:(long long)arg3 subtext:(id)arg4;

@end

