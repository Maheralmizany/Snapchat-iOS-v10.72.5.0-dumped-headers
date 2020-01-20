//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSSet, SCPNSceneIntRequest, SCULGtqServeRequest, UIImage;

@protocol SCLSIService <NSObject>
- (void)removeListener:(id <SCLSIServiceListener>)arg1;
- (void)addListener:(id <SCLSIServiceListener>)arg1;
- (void)clearResponsePool;
- (void)releaseResponseBarrier;
- (void)createResponseBarrier;
- (_Bool)isScanAnimationRequest:(SCPNSceneIntRequest *)arg1;
- (void)performAnalysisForImage:(UIImage *)arg1 contexts:(NSSet *)arg2 gtqServeRequest:(SCULGtqServeRequest *)arg3 location:(CLLocation *)arg4 touchPoint:(struct CGPoint)arg5 isFrontFacing:(_Bool)arg6 scanSource:(int)arg7;
@end
