//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, UIColor, UIImage;

@interface SCDynamicLayoutViewModel : NSObject <NSCopying>
{
    UIColor *_foregroundColor;
    UIColor *_backgroundColor;
    UIColor *_borderColor;
    NSString *_channelTitle;
    double _topInset;
    long long _backButtonType;
    UIImage *_backButtonImage;
}

@property(readonly, copy, nonatomic) UIImage *backButtonImage; // @synthesize backButtonImage=_backButtonImage;
@property(readonly, nonatomic) long long backButtonType; // @synthesize backButtonType=_backButtonType;
@property(readonly, nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(readonly, copy, nonatomic) NSString *channelTitle; // @synthesize channelTitle=_channelTitle;
@property(readonly, copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithForegroundColor:(id)arg1 backgroundColor:(id)arg2 borderColor:(id)arg3 channelTitle:(id)arg4 topInset:(double)arg5 backButtonType:(long long)arg6 backButtonImage:(id)arg7;

@end
