//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCMapPerson, UIViewController<SCPageNameLogging>;

@protocol SCMapProfilePresenter <NSObject>
- (void)presentProfileOnViewController:(UIViewController<SCPageNameLogging> *)arg1 person:(SCMapPerson *)arg2 delegate:(id <SCMapProfilePresenterDelegate>)arg3 hideMapSection:(_Bool)arg4;
@end
