//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UIColor;

@interface SCSearchStoryCardColorTheme : NSObject <NSCopying>
{
    UIColor *_titleTextColor;
    UIColor *_subtitleTextColor;
    UIColor *_backgroundColor;
    UIColor *_highlightedBackgroundColor;
}

@property(readonly, copy, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) UIColor *subtitleTextColor; // @synthesize subtitleTextColor=_subtitleTextColor;
@property(readonly, copy, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitleTextColor:(id)arg1 subtitleTextColor:(id)arg2 backgroundColor:(id)arg3 highlightedBackgroundColor:(id)arg4;

@end
