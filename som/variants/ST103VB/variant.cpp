/*
  Copyright (c) 2016 hathatehack  All right reserved.
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
#include "variant.h"

#ifdef __cplusplus
 extern "C" {
#endif
	
const PinInfo pInfo[] = {
        //-----------------------------InputPort-----------------------------//
        //PortA
  /* 0*/{GPIOA, GPIO_Pin_6,  RCC_APB2Periph_GPIOA, NONE,          NULL, NONE},
        {GPIOA, GPIO_Pin_7,  RCC_APB2Periph_GPIOA, NONE,          NULL, NONE},
        {GPIOB, GPIO_Pin_0,  RCC_APB2Periph_GPIOB, NONE,          NULL, NONE},
        {GPIOB, GPIO_Pin_1,  RCC_APB2Periph_GPIOB, NONE,          NULL, NONE},
        //PortB
  /* 4*/{GPIOB, GPIO_Pin_5,  RCC_APB2Periph_GPIOB, NONE,          NULL, NONE},
        {GPIOB, GPIO_Pin_7,  RCC_APB2Periph_GPIOB, NONE,          NULL, NONE},
        {GPIOB, GPIO_Pin_8,  RCC_APB2Periph_GPIOB, NONE,          NULL, NONE},
        {GPIOB, GPIO_Pin_9,  RCC_APB2Periph_GPIOB, NONE,          NULL, NONE},
        {GPIOC, GPIO_Pin_7,  RCC_APB2Periph_GPIOC, NONE,          NULL, NONE},
        {GPIOC, GPIO_Pin_9,  RCC_APB2Periph_GPIOC, NONE,          NULL, NONE},
        {GPIOD, GPIO_Pin_2,  RCC_APB2Periph_GPIOD, NONE,          NULL, NONE},
        {GPIOE, GPIO_Pin_14, RCC_APB2Periph_GPIOE, NONE,          NULL, NONE},
        //--------------------------------END--------------------------------//

        //-----------------------------OutputPort----------------------------//	
        //PortD
  /*12*/{GPIOA, GPIO_Pin_5,  RCC_APB2Periph_GPIOA, NONE,          NULL, NONE},
        {GPIOA, GPIO_Pin_4,  RCC_APB2Periph_GPIOA, NONE,          NULL, NONE},
        {GPIOE, GPIO_Pin_13, RCC_APB2Periph_GPIOE, NONE,          NULL, NONE},
        {GPIOE, GPIO_Pin_12, RCC_APB2Periph_GPIOE, NONE,          NULL, NONE},
        {GPIOE, GPIO_Pin_11, RCC_APB2Periph_GPIOE, NONE,          NULL, NONE},
        {GPIOE, GPIO_Pin_10, RCC_APB2Periph_GPIOE, NONE,          NULL, NONE},
        {GPIOE, GPIO_Pin_9,  RCC_APB2Periph_GPIOE, NONE,          NULL, NONE},
        {GPIOE, GPIO_Pin_8,  RCC_APB2Periph_GPIOE, NONE,          NULL, NONE},
        //PortC	
  /*20*/{GPIOC, GPIO_Pin_3,  RCC_APB2Periph_GPIOC, NONE,          NULL, NONE},
        {GPIOC, GPIO_Pin_2,  RCC_APB2Periph_GPIOC, NONE,          NULL, NONE},
        {GPIOC, GPIO_Pin_1,  RCC_APB2Periph_GPIOC, NONE,          NULL, NONE},
        {GPIOC, GPIO_Pin_0,  RCC_APB2Periph_GPIOC, NONE,          NULL, NONE},
        {GPIOC, GPIO_Pin_8,  RCC_APB2Periph_GPIOC, NONE,          TIM3, TIM_Channel_3},     //PWM3  //Remap
        {GPIOC, GPIO_Pin_6,  RCC_APB2Periph_GPIOC, NONE,          TIM3, TIM_Channel_1},     //PWM2  //Remap
        {GPIOB, GPIO_Pin_6,  RCC_APB2Periph_GPIOB, NONE,          TIM4, TIM_Channel_1},     //PWM1
        {GPIOA, GPIO_Pin_8,  RCC_APB2Periph_GPIOA, NONE,          TIM1, TIM_Channel_1},     //PWM0
        //--------------------------------END--------------------------------//

        //------------------------------Bus_Port-----------------------------//	
  /*28*/{GPIOE, GPIO_Pin_0,  RCC_APB2Periph_GPIOE, NONE,          NULL, NONE},
        {GPIOE, GPIO_Pin_1,  RCC_APB2Periph_GPIOE, NONE,          NULL, NONE},
        {GPIOE, GPIO_Pin_2,  RCC_APB2Periph_GPIOE, NONE,          NULL, NONE},
        {GPIOE, GPIO_Pin_3,  RCC_APB2Periph_GPIOE, NONE,          NULL, NONE},
        {GPIOE, GPIO_Pin_4,  RCC_APB2Periph_GPIOE, NONE,          NULL, NONE},
        {GPIOE, GPIO_Pin_5,  RCC_APB2Periph_GPIOE, NONE,          NULL, NONE},
        {GPIOE, GPIO_Pin_6,  RCC_APB2Periph_GPIOE, NONE,          NULL, NONE},
        {GPIOE, GPIO_Pin_7,  RCC_APB2Periph_GPIOE, NONE,          NULL, NONE},
  /*36*/{GPIOD, GPIO_Pin_8,  RCC_APB2Periph_GPIOD, NONE,          NULL, NONE},
        {GPIOD, GPIO_Pin_9,  RCC_APB2Periph_GPIOD, NONE,          NULL, NONE},
        {GPIOD, GPIO_Pin_10, RCC_APB2Periph_GPIOD, NONE,          NULL, NONE},
        {GPIOD, GPIO_Pin_11, RCC_APB2Periph_GPIOD, NONE,          NULL, NONE},
        {GPIOD, GPIO_Pin_12, RCC_APB2Periph_GPIOD, NONE,          NULL, NONE},
        {GPIOD, GPIO_Pin_13, RCC_APB2Periph_GPIOD, NONE,          NULL, NONE},
        {GPIOD, GPIO_Pin_14, RCC_APB2Periph_GPIOD, NONE,          NULL, NONE},
        {GPIOD, GPIO_Pin_15, RCC_APB2Periph_GPIOD, NONE,          NULL, NONE},
  /*44*/{GPIOE, GPIO_Pin_15, RCC_APB2Periph_GPIOE, NONE,          NULL, NONE},
        {GPIOD, GPIO_Pin_4,  RCC_APB2Periph_GPIOD, NONE,          NULL, NONE},
        {GPIOD, GPIO_Pin_3,  RCC_APB2Periph_GPIOD, NONE,          NULL, NONE},
        //--------------------------------END--------------------------------//

        //---------------------------USB_To_Serial---------------------------//
 /*   */{GPIOA, GPIO_Pin_9,  RCC_APB2Periph_GPIOA, NONE,          NULL, NONE},              //USART1_TX
        {GPIOA, GPIO_Pin_10, RCC_APB2Periph_GPIOA, NONE,          NULL, NONE},              //USART1_RX
        {GPIOD, GPIO_Pin_5,  RCC_APB2Periph_GPIOD, NONE,          NULL, NONE},              //USART2_TX
        {GPIOD, GPIO_Pin_6,  RCC_APB2Periph_GPIOD, NONE,          NULL, NONE},              //USART2_RX
        {GPIOD, GPIO_Pin_7,  RCC_APB2Periph_GPIOD, NONE,          NULL, NONE},              //USART2_TXEN
        //--------------------------------END--------------------------------//

        //--------------------------------SPI--------------------------------//
 /*   */{GPIOB, GPIO_Pin_12, RCC_APB2Periph_GPIOB, NONE,          NULL, NONE},              //SPI2_SS
        {GPIOB, GPIO_Pin_13, RCC_APB2Periph_GPIOB, NONE,          NULL, NONE},              //SPI2_CSK
        {GPIOB, GPIO_Pin_14, RCC_APB2Periph_GPIOB, NONE,          NULL, NONE},              //SPI2_MISO
        {GPIOB, GPIO_Pin_15, RCC_APB2Periph_GPIOB, NONE,          NULL, NONE},              //SPI2_MOSI
        //--------------------------------END--------------------------------//

        //--------------------------------LEDs-------------------------------//
 /*   */{GPIOC, GPIO_Pin_10, RCC_APB2Periph_GPIOC, NONE,          NULL, NONE},              //LED_RUN
        {GPIOC, GPIO_Pin_11, RCC_APB2Periph_GPIOC, NONE,          NULL, NONE},              //LED_STATUS
        //--------------------------------END--------------------------------//

        //----------------------------Analog pins----------------------------//
        //PortA
 /*N-4*/{GPIOA, GPIO_Pin_0,  RCC_APB2Periph_GPIOA, ADC_Channel_0, NULL, NONE},              //ADC0
        {GPIOA, GPIO_Pin_1,  RCC_APB2Periph_GPIOA, ADC_Channel_1, NULL, NONE},              //ADC1
        {GPIOA, GPIO_Pin_2,  RCC_APB2Periph_GPIOA, ADC_Channel_2, NULL, NONE},              //ADC2
        {GPIOA, GPIO_Pin_3,  RCC_APB2Periph_GPIOA, ADC_Channel_3, NULL, NONE},              //ADC3
        //--------------------------------END--------------------------------//
};

#ifdef __cplusplus
}
#endif

 // ----------------------------------------------------------------------------
 /*
  * USART objects
  */
RingBuffer rx_buffer0;
RingBuffer rx_buffer1;

USARTClass Serial(USART1, USART1_IRQn, ID_USART0, &rx_buffer0);
void serialEvent() __attribute__((weak));
void serialEvent() {};
USARTClass Serial1(USART2, USART2_IRQn, ID_USART1, &rx_buffer1);
void serialEvent1() __attribute__((weak));
void serialEvent1() {};

// IT handlers
void USART1_IRQHandler(void) __attribute__((weak));
void USART1_IRQHandler(void)
{
    Serial.IrqHandler();
}

void USART2_IRQHandler(void) __attribute__((weak));
void USART2_IRQHandler(void)
{
	Serial1.IrqHandler();
}

// ----------------------------------------------------------------------------
void serialEventRun(void)
{
	if(Serial.available())
		serialEvent();
	if(Serial1.available())
		serialEvent1();
}

// ----------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif

const uint8_t A0 = A(0);
const uint8_t A1 = A(1);
const uint8_t A2 = A(2);
const uint8_t A3 = A(3);

#define TIM_PRESCALER   (0u)
uint16_t TIM_ARR = ((SystemCoreClock) / (TIM_PRESCALER + 1u)) / (PWM_FREQUENCY) - 1u;
TIM_TimeBaseInitTypeDef gTIM_TimeBaseStructure;
TIM_OCInitTypeDef       gTIM_OCInitStructure;

void __libc_init_array(void);
void init(void)
{
    SystemInit();
    /* Configure the NVIC Preemption Priority Bits */
    /* 4 bits for pre-emption priority(0-15 PreemptionPriority) and 0 bits for subpriority(0 SubPriority) */
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_4);

    /* Set Systick to 1ms interval, common to all stm32f10x variants */
    if(SysTick_Config(SystemCoreClock / 1000u))
        while(1);

  /* Initialize C library */
    __libc_init_array();

#if defined(STM32F10X_HD) || defined (STM32F10X_MD)
    /* AFIO clock enable */
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE);
    /* Remap */
    GPIO_PinRemapConfig(GPIO_FullRemap_TIM3, ENABLE);
    GPIO_PinRemapConfig(GPIO_Remap_USART2, ENABLE);
#endif

    pinMode(PIN_LED_RUN, OUTPUT);
    digitalWrite(PIN_LED_RUN, LOW);
    pinMode(PIN_LED_STATUS, OUTPUT);
    digitalWrite(PIN_LED_STATUS, HIGH);

    pinMode(A0, INPUT_AN);
    pinMode(A1, INPUT_AN);
    pinMode(A2, INPUT_AN);
    pinMode(A3, INPUT_AN);
    /* Initialize ADC peripheral */
#if defined(STM32F10X_HD) || defined (STM32F10X_MD)
    RCC_ADCCLKConfig(RCC_PCLK2_Div6);  /* ADCclk 14MHz max! */
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC1, ENABLE);

    ADC_DeInit(ADC1);
    ADC_InitTypeDef ADC_InitStructure;
    ADC_InitStructure.ADC_Mode               = ADC_Mode_Independent;
    ADC_InitStructure.ADC_ScanConvMode       = DISABLE;
    ADC_InitStructure.ADC_ContinuousConvMode = DISABLE;
    ADC_InitStructure.ADC_ExternalTrigConv   = ADC_ExternalTrigConv_None;
    ADC_InitStructure.ADC_DataAlign          = ADC_DataAlign_Right;
    ADC_InitStructure.ADC_NbrOfChannel       = 1;
    ADC_Init(ADC1, &ADC_InitStructure);
    ADC_Cmd(ADC1, ENABLE);

    ADC_ResetCalibration(ADC1);
    while(ADC_GetResetCalibrationStatus(ADC1));
    ADC_StartCalibration(ADC1);
    while(ADC_GetCalibrationStatus(ADC1));
#elif defined(STM32F40_41xxx)
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC1, ENABLE);
    ADC_DeInit();
    ADC_CommonInitTypeDef ADC_CommonInitStructure;
    ADC_CommonInitStructure.ADC_Mode = ADC_Mode_Independent;
    ADC_CommonInitStructure.ADC_TwoSamplingDelay = ADC_TwoSamplingDelay_6Cycles;
    ADC_CommonInitStructure.ADC_DMAAccessMode = ADC_DMAAccessMode_Disabled;
    ADC_CommonInitStructure.ADC_Prescaler = ADC_Prescaler_Div2;
    ADC_CommonInit(&ADC_CommonInitStructure);
    ADC_InitTypeDef ADC_InitStructure;
    ADC_InitStructure.ADC_Resolution = ADC_Resolution_12b;
    ADC_InitStructure.ADC_ScanConvMode = DISABLE;
    ADC_InitStructure.ADC_ContinuousConvMode = DISABLE;
    ADC_InitStructure.ADC_ExternalTrigConvEdge = ADC_ExternalTrigConvEdge_None;
    //ADC_InitStructure.ADC_ExternalTrigConv = ;
    ADC_InitStructure.ADC_DataAlign = ADC_DataAlign_Right;
    ADC_InitStructure.ADC_NbrOfConversion = 1;
    ADC_Init(ADC1, &ADC_InitStructure);

    ADC_Cmd(ADC1, ENABLE);
//    // Check the end of ADC1 reset calibration register
//    while(ADC_GetSoftwareStartConvStatus(ADC1));
#endif

    pinMode(27, OUTPUT_AF_PP);
    pinMode(26, OUTPUT_AF_PP);
    pinMode(25, OUTPUT_AF_PP);
    pinMode(24, OUTPUT_AF_PP);
#if defined (STM32F40_41xxx)
    GPIO_PinAFConfig(GPIOC, GPIO_PinSource8, GPIO_AF_TIM3);
    GPIO_PinAFConfig(GPIOC, GPIO_PinSource6, GPIO_AF_TIM3);
    GPIO_PinAFConfig(GPIOB, GPIO_PinSource6, GPIO_AF_TIM4);
    GPIO_PinAFConfig(GPIOA, GPIO_PinSource8, GPIO_AF_TIM1);
#endif
  /* Initialize TIM peripheral */
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM1, ENABLE);
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3 | RCC_APB1Periph_TIM4, ENABLE);

    /* Time base configuration */
    gTIM_TimeBaseStructure.TIM_Period = TIM_ARR;
    gTIM_TimeBaseStructure.TIM_Prescaler = TIM_PRESCALER;
    gTIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1;
    gTIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;
    gTIM_TimeBaseStructure.TIM_RepetitionCounter = 0;                /* For TIM1 and TIM8 */
    TIM_TimeBaseInit(TIM1, &gTIM_TimeBaseStructure);
    TIM_TimeBaseInit(TIM3, &gTIM_TimeBaseStructure);
    TIM_TimeBaseInit(TIM4, &gTIM_TimeBaseStructure);

        /* PWM1 Mode configuration */
    gTIM_OCInitStructure.TIM_Pulse        = 0u;
    gTIM_OCInitStructure.TIM_OCMode       = TIM_OCMode_PWM1;
    gTIM_OCInitStructure.TIM_OutputState  = TIM_OutputState_Enable;
    gTIM_OCInitStructure.TIM_OCPolarity   = TIM_OCPolarity_High;
    gTIM_OCInitStructure.TIM_OutputNState = TIM_OutputNState_Disable;   /* For TIM1 and TIM8 */
    gTIM_OCInitStructure.TIM_OCNPolarity  = TIM_OCNPolarity_High;       /* For TIM1 and TIM8 */
    gTIM_OCInitStructure.TIM_OCIdleState  = TIM_OCIdleState_Reset;      /* For TIM1 and TIM8 */
    gTIM_OCInitStructure.TIM_OCNIdleState = TIM_OCNIdleState_Reset;     /* For TIM1 and TIM8 */
    TIM_OC1Init(TIM1, &gTIM_OCInitStructure);
    TIM_OC1PreloadConfig(TIM1, TIM_OCPreload_Enable);
    TIM_OC1Init(TIM4, &gTIM_OCInitStructure);
    TIM_OC1PreloadConfig(TIM4, TIM_OCPreload_Enable);
    TIM_OC1Init(TIM3, &gTIM_OCInitStructure);
    TIM_OC1PreloadConfig(TIM3, TIM_OCPreload_Enable);
    TIM_OC3Init(TIM3, &gTIM_OCInitStructure);
    TIM_OC3PreloadConfig(TIM3, TIM_OCPreload_Enable);

    TIM_CtrlPWMOutputs(TIM1, ENABLE);  /* For TIM1 and TIM8 */

    TIM_ARRPreloadConfig(TIM1, ENABLE);
    TIM_ARRPreloadConfig(TIM3, ENABLE);
    TIM_ARRPreloadConfig(TIM4, ENABLE);
    TIM_Cmd(TIM1, ENABLE);
    TIM_Cmd(TIM3, ENABLE);
    TIM_Cmd(TIM4, ENABLE);
}

#ifdef __cplusplus
}
#endif
