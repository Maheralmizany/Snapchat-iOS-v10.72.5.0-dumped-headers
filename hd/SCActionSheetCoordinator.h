//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SCAlertController;

@interface SCActionSheetCoordinator : NSObject
{
    SCAlertController *_alertController;
    NSArray *_actions;
    CDUnknownBlockType _dismissBlock;
    id <SCActionSheetDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)present;
- (id)initWithActions:(id)arg1 orientationMask:(unsigned long long)arg2;
- (id)initWithActions:(id)arg1 orientationMask:(unsigned long long)arg2 delegate:(id)arg3;
- (id)initWithActions:(id)arg1 orientationMask:(unsigned long long)arg2 delegate:(id)arg3 onDismiss:(CDUnknownBlockType)arg4;

@end

