//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCContextSessionParams, UIViewController<SCPageNameLogging>;

@protocol SCContextPresenterProviding <NSObject>
- (id <SCContextPresenting>)createContextPresenterWithDataProvider:(id <SCContextDataProviding>)arg1 baseViewController:(UIViewController<SCPageNameLogging> *)arg2 sourceType:(long long)arg3 contextMenuLocation:(long long)arg4 legacySessionParams:(SCContextSessionParams *)arg5 operaImageProvider:(id <SCOperaImageProvider>)arg6;
@end

