//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCQueuePerformer;

@interface SCNotificationsConfigPersister : NSObject
{
    NSString *_userId;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)persist;
- (id)initWithUserId:(id)arg1;

@end

