//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCOptInEntityId : NSObject <NSCopying>
{
    unsigned long long _subtype;
    long long _publisherStory_publisherId;
    NSString *_userStory_userId;
}

+ (id)userStoryWithUserId:(id)arg1;
+ (id)publisherStoryWithPublisherId:(long long)arg1;
- (void).cxx_destruct;
- (void)matchPublisherStory:(CDUnknownBlockType)arg1 userStory:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
