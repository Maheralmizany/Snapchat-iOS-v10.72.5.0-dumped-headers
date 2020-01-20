//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UIColor;

@interface SCDiscoverFeedPublisherStoryProgressBarViewModel : NSObject <NSCopying>
{
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
    double _progressBarPercentage;
    double _widthToTileWidthRatio;
    double _height;
    double _cornerRadius;
}

@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) double widthToTileWidthRatio; // @synthesize widthToTileWidthRatio=_widthToTileWidthRatio;
@property(readonly, nonatomic) double progressBarPercentage; // @synthesize progressBarPercentage=_progressBarPercentage;
@property(readonly, copy, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBackgroundColor:(id)arg1 foregroundColor:(id)arg2 progressBarPercentage:(double)arg3 widthToTileWidthRatio:(double)arg4 height:(double)arg5 cornerRadius:(double)arg6;

@end
