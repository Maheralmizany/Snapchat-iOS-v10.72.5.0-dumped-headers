//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, SCCommerceOperaPresenter;

@protocol SCCommerceOperaPresenterDelegate <NSObject>

@optional
- (void)commerceOperaViewerDidDisappear:(SCCommerceOperaPresenter *)arg1 additionalInfo:(NSDictionary *)arg2 wasBackgrounded:(_Bool)arg3;
- (void)commerceOperaViewerDidAppear:(SCCommerceOperaPresenter *)arg1;
@end

