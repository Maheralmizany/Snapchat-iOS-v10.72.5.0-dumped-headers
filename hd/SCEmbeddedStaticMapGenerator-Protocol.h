//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCMapPersonLocation;

@protocol SCEmbeddedStaticMapGenerator <NSObject>
- (void)staticMapViewWithFrame:(struct CGRect)arg1 personLocation:(SCMapPersonLocation *)arg2 isCurrentUser:(_Bool)arg3 ghostMode:(_Bool)arg4 zoomLevel:(double)arg5 rasterized:(_Bool)arg6 withCompletion:(void (^)(UIView *))arg7;
@end

