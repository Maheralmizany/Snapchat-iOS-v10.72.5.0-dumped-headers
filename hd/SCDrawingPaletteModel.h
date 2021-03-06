//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface SCDrawingPaletteModel : NSObject
{
    NSArray *_paletteSwitchIcons;
    NSDictionary *_gradientColorsForPaletteTypes;
    long long _numPalettes;
    unsigned long long _colorPickerVersion;
    unsigned long long _currentPaletteType;
}

+ (id)paletteIdFromType:(unsigned long long)arg1;
+ (id)createWithColorPickerVersion:(unsigned long long)arg1;
@property(nonatomic) unsigned long long currentPaletteType; // @synthesize currentPaletteType=_currentPaletteType;
@property(readonly, nonatomic) unsigned long long colorPickerVersion; // @synthesize colorPickerVersion=_colorPickerVersion;
- (void).cxx_destruct;
- (void)togglePalette;
- (id)_paletteIconForPaletteType:(unsigned long long)arg1;
- (id)_createGradientColorsForPaletteType:(unsigned long long)arg1;
- (id)_gradientColorsForPaletteType:(unsigned long long)arg1;
- (id)paletteIconForCurrentPalette;
@property(readonly, nonatomic) unsigned long long nextPaletteType;
- (id)gradientColorsForCurrentPalette;
- (id)initWithColorPickerVersion:(unsigned long long)arg1;

@end

