//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIFont;

@interface SCLensLogLineWrapper : NSObject
{
    unsigned long long _tabStopLocation;
    UIFont *_font;
}

@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, nonatomic) unsigned long long tabStopLocation; // @synthesize tabStopLocation=_tabStopLocation;
- (void).cxx_destruct;
- (id)wrapString:(id)arg1 boundedByWidth:(double)arg2 prefixingSpacer:(id)arg3;
- (id)initWithTabStopLocation:(unsigned long long)arg1 font:(id)arg2;

@end

