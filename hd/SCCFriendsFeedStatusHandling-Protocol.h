//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SCComposerMarshallable.h"

@protocol SCCFriendsFeedStatusHandling <NSObject, SCComposerMarshallable>
- (void (^)(void))subscribeWithCallback:(void (^)(void))arg1;
- (void)fetchWithCallback:(void (^)(NSArray *, NSDictionary *))arg1;
@end
