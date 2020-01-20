//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, UIImage;

@interface SCHovaStatusBarSnapshot : NSObject
{
    long long _statusBarStyle;
    NSDate *_timestamp;
    UIImage *_image;
    UIImage *_tintedImage;
}

+ (id)statusBarSnapshotWithImage:(id)arg1 statusBarStyle:(long long)arg2;
@property(readonly, nonatomic) UIImage *tintedImage; // @synthesize tintedImage=_tintedImage;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
- (void).cxx_destruct;
- (_Bool)isSnapshotStale;
- (id)initWithImage:(id)arg1 statusBarStyle:(long long)arg2;

@end
