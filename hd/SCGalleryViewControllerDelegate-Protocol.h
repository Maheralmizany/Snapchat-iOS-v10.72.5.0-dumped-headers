//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCUnifiedProfileTransitionCoordinator;

@protocol SCGalleryViewControllerDelegate <NSObject>
- (SCUnifiedProfileTransitionCoordinator *)profileCoordinator;
- (void)scrollToCameraFromGalleryAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)unlockScrollWithKey:(NSString *)arg1;
- (void)lockScrollWithKey:(NSString *)arg1;
@end

