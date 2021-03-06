//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPFontProvider.h"

@class NSString, UIFont;

@interface SPSystemFontProvider : NSObject <SPFontProvider>
{
    NSString *_name;
    double _height;
    UIFont *_uiFont;
}

@property(retain, nonatomic) UIFont *uiFont; // @synthesize uiFont=_uiFont;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)loadUIFont;
- (id)initWithName:(id)arg1 uiFont:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

