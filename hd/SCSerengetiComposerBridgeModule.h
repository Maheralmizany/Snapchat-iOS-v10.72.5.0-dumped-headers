//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNComposerModuleFactory.h"

@class NSArray, UIViewController<SCPageNameLogging>;

@interface SCSerengetiComposerBridgeModule : NSObject <SCNComposerModuleFactory>
{
    NSArray *_hooks;
    UIViewController<SCPageNameLogging> *_viewController;
}

- (void).cxx_destruct;
- (id)loadModule;
- (id)initWithHooks:(id)arg1 viewController:(id)arg2;

@end

