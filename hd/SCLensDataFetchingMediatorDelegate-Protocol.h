//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLens, SCLensDataFetchingMediator;

@protocol SCLensDataFetchingMediatorDelegate <NSObject>
- (void)lensDataFetchingMediator:(SCLensDataFetchingMediator *)arg1 didUpdateContentForLens:(SCLens *)arg2 contentUpdateType:(long long)arg3;
- (void)lensDataFetchingMediatorDidStopUpdatingLensData:(SCLensDataFetchingMediator *)arg1;
- (void)lensDataFetchingMediatorDidStartUpdatingLensData:(SCLensDataFetchingMediator *)arg1;
- (void)lensDataFetchingMediatorUpdateLenses:(SCLensDataFetchingMediator *)arg1;
@end

