//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCFriendsFeedSavedSnapMessage : NSObject <NSCopying>
{
    _Bool _isUnread;
    NSString *_actionPerformer;
}

@property(readonly, nonatomic) _Bool isUnread; // @synthesize isUnread=_isUnread;
@property(readonly, copy, nonatomic) NSString *actionPerformer; // @synthesize actionPerformer=_actionPerformer;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithActionPerformer:(id)arg1 isUnread:(_Bool)arg2;

@end

