//
//  UFAreaPickerRow.h
//  UFKit
//
//  Created by Chen Zhangli on 2019/7/30.
//  Copyright © 2019 Uniauto. All rights reserved.
//

#import "UFTextFieldRow.h"

NS_ASSUME_NONNULL_BEGIN

@class UFAreaPickerRowMaker;
@interface UFAreaPickerRow : UFTextFieldRow

// 地址分割符（如：@“ ” @“，” @“-”）
@property (nonatomic, copy) NSString *areaSeparator;

+ (UFAreaPickerRow *)makeAreaPickerRow:(NS_NOESCAPE void(^)(UFAreaPickerRowMaker *make))block;

@end

@interface UFAreaPickerRowMaker : UFTextFieldRowMaker

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithRow:(UFRow *)row NS_UNAVAILABLE;
- (instancetype)initWithTextFieldRow:(UFTextFieldRow *)row NS_UNAVAILABLE;
- (instancetype)initWithAreaPickerRow:(UFAreaPickerRow *)row NS_DESIGNATED_INITIALIZER;

@property (nonatomic, strong, readonly) UFAreaPickerRow *areaPickerRow;

@property (nonatomic, copy, readonly) UFAreaPickerRowMaker *(^areaSeparator)(NSString * _Nullable areaSeparator);

@end

NS_ASSUME_NONNULL_END
