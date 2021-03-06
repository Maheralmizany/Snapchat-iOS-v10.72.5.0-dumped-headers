//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNNetworkTypesUiPageChangeNotifier.h"

@class NSMutableArray, SCDisplayContext;

@interface SCNetworkUiPageChangeNotifier : NSObject <SCNNetworkTypesUiPageChangeNotifier>
{
    id <SCPerforming> _queuePerformer;
    NSMutableArray *_listeners;
    SCDisplayContext *_displayContext;
}

@property(retain) SCDisplayContext *displayContext; // @synthesize displayContext=_displayContext;
- (void).cxx_destruct;
- (void)updateDisplayContext:(id)arg1;
- (id)registerListener:(id)arg1;
- (void)notifyListener:(id)arg1;
- (id)initWithDefaultDisplayContext:(id)arg1 queuePerformer:(id)arg2;

@end

