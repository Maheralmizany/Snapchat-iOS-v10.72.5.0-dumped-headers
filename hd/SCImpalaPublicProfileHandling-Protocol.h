//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SCComposerMarshallable.h"

@protocol SCImpalaPublicProfileHandling <NSObject, SCComposerMarshallable>
- (void (^)(void))observeWithCallback:(void (^)(void))arg1;
- (void)updateOptInNotificationsWithOptedIn:(_Bool)arg1 callback:(void (^)(NSString *))arg2;
- (void)updateSubscribedWithSubscribed:(_Bool)arg1 callback:(void (^)(NSString *))arg2;
- (void)getStateWithCallback:(void (^)(SCImpalaPublicProfileState *, NSString *))arg1;
@end

