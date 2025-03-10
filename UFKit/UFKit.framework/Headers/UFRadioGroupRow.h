//
//  UFRadioGroupRow.h
//  UFKit
//
//  Created by ChenZhangli QQ893419255 on 2019/6/25.
//  Copyright © 2019 UFKit. All rights reserved.
//

#import "UFRow.h"
#import "UFRadioGroupStyle.h"

NS_ASSUME_NONNULL_BEGIN

@class UFRadioGroupRowMaker;
@interface UFRadioGroupRow : UFRow

// 选择项
@property (nonatomic, strong) NSArray <__kindof NSString *> *itemArray;
// 单选样式
@property (nonatomic, strong, nullable) UFRadioGroupStyle *radioGroupStyle;

// 是否可编辑
@property (nonatomic, assign) BOOL editable;

+ (UFRadioGroupRow *)makeRadioGroupRow:(NS_NOESCAPE void(^)(UFRadioGroupRowMaker *make))block;

@end

@interface UFRadioGroupRowMaker : UFRowMaker

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithRow:(UFRow *)row NS_UNAVAILABLE;
- (instancetype)initWithRadioGroupRow:(UFRadioGroupRow *)row NS_DESIGNATED_INITIALIZER;

@property (nonatomic, strong, readonly) UFRadioGroupRow *radioGroupRow;

@property (nonatomic, copy, readonly) UFRadioGroupRowMaker *(^radioGroupStyle)(UFRadioGroupStyle * _Nullable radioGroupStyle);
@property (nonatomic, copy, readonly) UFRadioGroupRowMaker *(^itemArray)(NSArray <__kindof NSString *> * _Nullable itemArray);

@property (nonatomic, copy, readonly) UFRadioGroupRowMaker *(^editable)(BOOL editable);

@end

NS_ASSUME_NONNULL_END
